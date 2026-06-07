try:
    
    a,b,c=7,8,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(5,b=4)
    print(a,b,c)
    
except: print('error')
