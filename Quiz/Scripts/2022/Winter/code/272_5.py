try:
    
    a,b,c=8,6,7
    def f(a,b=8,c=9):
        print(a,b,c,end="")
    
    f(a=4,5,c=0)
    print(a,b,c)
    
except: print('error')
