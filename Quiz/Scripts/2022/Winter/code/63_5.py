try:
    
    a,b,c=9,7,6
    def f(a,b=8,c=9):
        print(a,b,c,end="")
    
    f(a=4,5,a=3)
    print(a,b,c)
    
except: print('error')
