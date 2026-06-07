try:
    
    a,b,c=8,9,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(1,c=5,b=4)
    print(a,b,c)
    
except: print('error')
