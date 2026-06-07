try:
    a,b,c=6,8,7
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(4,b=5)
    print(a,b,c)
    
except: print('error')
