try:
    
    a,b,c=7,6,9
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(3,c=5,b=4)
    print(a,b,c)
    
except: print('error')
