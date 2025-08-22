import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# NUMPY MODULE
# #Creating an array
# x=np.array([1,2,3,4])
# print(x)
# print(type(x))
# #Creating an array by taking user inputs
# #----------------------------------------------------------------------------------------------------
# l=[]
# x=int(input("Enter Number of elements : "))
# for i in range(x):
#     a=input("Enter Element : ")
#     l.append(a)
# arr=np.array(l,ndmin=5)
# print(arr)
# print(type(np))
# #----------------------------------------------------------------------------------------------------
# # #To input all elements with zero(0)
# arr_zero=np.zeros(12)
# print(arr_zero)
# #To input all elements with ones(1)
# arr_one=np.ones(12)
# print(arr_one)
# #To create an empty array
# arr_empty=np.empty(12)
# print(arr_empty)
# #To create an array of a range
# arr_range=np.arange(2,25,4)   #arange(start,stop,step)
# print(arr_range) 
# #diagonal element - 1
# arr_digone=np.eye(5)
# print(arr_digone)
# #Linear Specified
# arr_ls=np.linspace(0,10,7)  #linespace(Start,Stop,Step) --> It divides Stop in Step parts from Start
# print(arr_ls)
# rand function
# var1=np.random.rand(4)
# print(var1)
# var2=np.random.rand(2,4)
# print(var2)
# # randn function
# var1=np.random.randn(4)
# print(var1)
# var2=np.random.randn(2,4)
# print(var2)
# # ranf function
# var3=np.random.ranf(10)
# print(var3)
# # randint function
# var4=np.random.randint(5,500,1000)
# print(var4)
# # To check datatype
# var4=np.array([1,2,3,4,5,6,7,8,9,10])
# print("Data type : ",var4.dtype)
# # Arithmetic Operations
# x=[15,47,43,74]
# y=[5,4,3,2]
# a=np.add(x,y)
# s=np.subtract(x,y)
# m=np.multiply(x,y)
# d=np.divide(x,y)
# mo=np.mod(x,y)
# p=np.power(x,y)
# r=np.reciprocal(x)
# print(f'Addition Matrix : {a}\nSubtaction Matrix : {s}\nMultiplication Matrix : {m}\nDivide Matrix : {d}\nModulated Matrix : {mo}\nPower Matrix : {p}\nReciprocated Matrix : {r}')
# # Arithmetic Functions
# n=[0,4500,6000,7500,9000]
# minele=np.min(n)
# maxele=np.max(n)
# arg_min=np.argmin(n)
# sqroot=np.sqrt(n)
# sinf=np.sin(n)
# cosf=np.cos(n)
# cum_sum=np.cumsum(n)
# arg_max=np.argmax(n)
# print(f"minimum ele:{minele}\nmaximum ele:{maxele}\nposition of minimum ele:{arg_min}\nsquare root of ele:{sqroot}\nsin value of ele:{sinf}\ncos value of ele:{cosf}\n cumulative sum:{cum_sum}\nposition of maximum value:{arg_max}\n")
# # Series
# a=pd.Series()
# print(a)
# indexs=[3,4,5,6,7,8]
# s=pd.Series(indexs)
# print(s)
# print(type(s))
# Using Dictionaries
# x=['Numpy','Matplotlib','Pandas','SciPy','PyAutoGUI','PyTest']
# var1=pd.Series(x,index=['a','b','c','d','e','f'],name='Python')
# print(var1)
# dic={}
# for i in x:
#     if (i=='Numpy'or i=='Pandas'):
#         dic[i]='Done'
#     else:
#         dic[i]='Pending'
# var2=pd.Series(dic,name='Python-Module-Status')
# print(var2)
# DataFrame
# l=['Numpy','Matplotlib','Pandas','SciPy','PyAutoGUI','PyTest']
# varl=pd.DataFrame(l)
# print(varl)
# print(type(varl))
# d={'Numpy':['Done'],'Matplotlib':['Pending'],'Pandas':['Done'],'SciPy':['Pending'],'PyAutoGUI':['Pending'],'PyTest':['Pending']}
# vard=pd.DataFrame(d)
# print(vard)
# print(type(vard))
# Arithmetic Operations
# var=pd.DataFrame({"A":[5,6,7,8],"B":[1,2,3,4]})
# var["C"]=var["A"]+var["B"]
# var["D"]=var["A"]-var["B"]
# var["E"]=var["A"]*var["B"]
# var["F"]=var["A"]/var["B"]
# print(var)
# var.insert(2,'Python',[11,12,13,14]) # Insert
# print(var)
# var.pop('Python') # Delete
# print(var)
# # Write & Read CSV (Working with CSV)
# dis={'a':[1,2,3,4,5],'b':[1,2,3,4,5],'c':[1,2,3,4,5]}
# d=pd.DataFrame(dis)
# print(d)
# d.to_csv("Text_new_csv.csv",index=True)
# csv_1=pd.read_csv('Text_new_csv.csv',dtype={'a':float})
# print(csv_1)
# print(csv_1.index)
# print(csv_1.columns)
# print(csv_1.tail(2))
# print(csv_1.index.array)
# csv_1.loc[4,"c"]="Yahan kuch to aana tha"
# print(csv_1)
# Handling Missing Values/Data 
# (dropna & fillna)
# (replace & Interpolate)
# (Merge & Concat)
# (GroupBy & Join and Append)
# (Pivot Table & Melt Function)
# ---------------------------------------------------- Matplotlib --------------------------------------------------------------------------------------
# # Bar Plot
# c=['y','b','m','g']
# x=[10,20,30,40]
# y=[10,20,30,40]
# plt.bar(x,y,width=1,align='center')
# plt.xlabel('x-axis')
# plt.ylabel('y-axis')
# plt.title('First Graph')
# plt.show()

# x=["Python","C","C++","Java"]
# y=[85,70,60,82]
# z=[20,30,40,50]
# width=0.2
# p=np.arange(len(x))
# p1=[j+width for j in p]
# plt.xlabel("Language")
# plt.ylabel("No")
# plt.bar(p,y,width,color='r',label='Popular')
# plt.bar(p1,z,width,color='y',label='Popular1')
# plt.xticks(p+width/2,x,rotation=20)
# plt.title("SECOND GRAPH")
# plt.legend()
# plt.barh(y,width)
# plt.show()
