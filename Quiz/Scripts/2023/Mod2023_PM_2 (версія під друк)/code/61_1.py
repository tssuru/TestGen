try:
    a,b,c=6,7,8
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(5,1,b=4)
    print(a,b,c)
    
except: print('error')
