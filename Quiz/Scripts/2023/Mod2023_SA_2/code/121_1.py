try:
    a,b,c=8,6,9
    def g(a,b=7,c=9):
        print(a,b,c,end=" ")
    
    g(a=3,2,a=1)
    print(a,b,c)
    
except: print('error')
