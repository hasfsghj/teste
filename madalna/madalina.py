from tkinter import *
import tkinter as tk
import tkinter.font as tkFont
from tkinter import messagebox
import winsound


root = tk.Tk()
root.title("Christmas Market Budget Planner")
root.geometry("600x500")

font = tkFont.Font(family="Gill Sans", size=14, weight="bold")
label = tk.Label(root, text="Christmas Market Budget Planner", font=font, bg='brown1', fg='white')
label.grid(row=0, column=0, columnspan=2, pady=20)

name_var = tk.StringVar()
buget_var = tk.IntVar()
item_var = tk.StringVar()
pret_var = tk.IntVar()


def play_music():
    winsound.PlaySound(r"D:\WinUsers\DELL\Documents\teste\madalna\destept.wav", winsound.SND_FILENAME | winsound.SND_LOOP | winsound.SND_ASYNC)
    
def submit():
    name = name_var.get()
    buget = buget_var.get()
    messagebox.showinfo("Info", f"Username: {name}\nBugetul: {buget}")

def add_item():
    item = item_var.get()
    pret = pret_var.get()
    buget = buget_var.get()
    if item == "1decembrie":
        play_music()    
    
    if item and pret and pret <= buget:
        shopping_list.insert(END, f"Item: {item}, Pret: {pret}")
        buget_var.set(buget - pret)
        item_var.set("")
        pret_var.set(0)
    elif pret > buget:
        messagebox.showinfo("Error", "Not enough money")

# input
name_label = tk.Label(root, text='Username', font=('calibre', 12, 'bold'), bg='brown1', fg='white')
name_entry = tk.Entry(root, textvariable=name_var, font=('calibre', 12, 'normal'))

buget_label = tk.Label(root, text='Budget', font=font, bg='brown1', fg='white')
buget_entry = tk.Entry(root, textvariable=buget_var, font=('calibre', 12, 'normal'))

buget_display = tk.Label(root, textvariable=buget_var, font=('calibre', 12, 'bold'), bg='brown1', fg='white')

# buton submit
sub_btn = tk.Button(root, text='Submit', command=submit, font=('calibre', 12, 'bold'), bg='chartreuse3', fg='white')

# Shopping list input
item_label = tk.Label(root, text='Add Item', font=('calibre', 12, 'bold'), bg='brown1', fg='white')
item_entry = tk.Entry(root, textvariable=item_var, font=('calibre', 12, 'normal'))

pret_label = tk.Label(root, text='Price:', font=('calibre', 12, 'bold'), bg='brown1', fg='white')
pret_entry = tk.Entry(root, textvariable=pret_var, font=('calibre', 12, 'normal'))

add_btn = tk.Button(root, text='Add', command=add_item, font=('calibre', 12, 'bold'), bg='chartreuse3', fg='white')

# shopping list+ scroll
shopping_list = Listbox(root, font=('calibre', 12, 'normal'), width=40, height=10)
shopping_scroll = Scrollbar(root, orient=VERTICAL)
shopping_list.config(yscrollcommand=shopping_scroll.set)
shopping_scroll.config(command=shopping_list.yview)

#grid
name_label.grid(row=1, column=0, padx=20, pady=10, sticky="w")
name_entry.grid(row=1, column=1, padx=20, pady=10, sticky="w")
buget_label.grid(row=2, column=0, padx=20, pady=10, sticky="w")
buget_entry.grid(row=2, column=1, padx=20, pady=10, sticky="w")
buget_display.grid(row=2, column=2, padx=20, pady=10, sticky="w")

sub_btn.grid(row=3, column=0, columnspan=2, pady=20, sticky="ew")

item_label.grid(row=4, column=0, padx=20, pady=10, sticky="w")
item_entry.grid(row=4, column=1, padx=20, pady=10, sticky="w")
pret_label.grid(row=5, column=0, padx=20, pady=10, sticky="w")
pret_entry.grid(row=5, column=1, padx=20, pady=10, sticky="w")

add_btn.grid(row=6, column=0, columnspan=2, pady=20, sticky="ew")

shopping_list.grid(row=7, column=0, columnspan=2, padx=20, pady=10, sticky="nsew")
shopping_scroll.grid(row=7, column=2, sticky='ns')

root.configure(bg='brown1')

root.mainloop()