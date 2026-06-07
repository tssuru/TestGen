try:
    
    a,b,c=9,7,6
    def g(a,b=8,c=9):
        print(a,b,c,end="")
    
    g(b=5,c=4,3)
    print(a,b,c)
    
except: print('error')
