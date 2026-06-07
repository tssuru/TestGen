try:
    
    a,b,c=8,9,6
    def f(a,b=7,c=7):
        print(a,b,c,end="")
    
    f(b=0,c=1,5)
    print(a,b,c)
    
except: print('error')
