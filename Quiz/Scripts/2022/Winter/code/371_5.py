try:
    
    a,b,c=8,6,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(2,c=0)
    print(a,b,c)
    
except: print('error')
