try:
    
    a,b,c=8,7,9
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=4,c=2,5)
    print(a,b,c)
    
except: print('error')
