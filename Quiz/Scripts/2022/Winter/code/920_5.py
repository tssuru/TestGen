try:
    
    a,b,c=8,7,6
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(3,4,0)
    print(a,b,c)
    
except: print('error')
