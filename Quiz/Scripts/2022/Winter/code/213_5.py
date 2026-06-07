try:
    
    a,b,c=8,7,6
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(5,c=2)
    print(a,b,c)
    
except: print('error')
