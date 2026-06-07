try:
    
    a,b,c=7,6,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=0,c=4,2)
    print(a,b,c)
    
except: print('error')
