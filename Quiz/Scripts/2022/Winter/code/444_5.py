try:
    
    a,b,c=8,9,7
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(a=2,5,c=1)
    print(a,b,c)
    
except: print('error')
