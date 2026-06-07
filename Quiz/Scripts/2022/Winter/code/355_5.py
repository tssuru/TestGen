try:
    
    a,b,c=7,7,9
    def f(a,b=8,c=6):
        print(a,b,c,end="")
    
    f(1,2,5)
    print(a,b,c)
    
except: print('error')
