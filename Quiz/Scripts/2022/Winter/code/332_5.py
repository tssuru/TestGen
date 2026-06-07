try:
    
    a,b,c=8,6,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(0,3,5)
    print(a,b,c)
    
except: print('error')
