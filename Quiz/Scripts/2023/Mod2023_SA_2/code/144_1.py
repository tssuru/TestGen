try:
    a,b,c=7,8,6
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(b=0,c=1,2)
    print(a,b,c)
    
except: print('error')
