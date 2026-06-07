try:
    
    a,b,c=6,6,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(b=4,c=4,5)
    print(a,b,c)
    
except: print('error')
