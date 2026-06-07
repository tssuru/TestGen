try:
    
    a,b,c=8,6,9
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=3,c=0,5)
    print(a,b,c)
    
except: print('error')
