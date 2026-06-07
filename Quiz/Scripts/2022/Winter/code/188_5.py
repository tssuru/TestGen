try:
    
    a,b,c=7,8,6
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(4,5,4)
    print(a,b,c)
    
except: print('error')
