try:
    a,b,c=9,8,6
    def g(a,b=7,c=8):
        print(a,b,c,end=" ")
    
    g(2,1,c=0)
    print(a,b,c)
    
except: print('error')
