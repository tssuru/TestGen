try:
    
    a,b,c=8,6,9
    def f(a,b=7,c=7):
        print(a,b,c,end="")
    
    f(3,5,2)
    print(a,b,c)
    
except: print('error')
