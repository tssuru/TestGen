try:
    a,b,c=6,8,7
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(a=1,c=2,c=4)
    print(a,b,c)
    
except: print('error')
