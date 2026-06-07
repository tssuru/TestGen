try:
    a,b,c=8,9,7
    def g(a,b=6,c=9):
        print(a,b,c,end=" ")
    
    g(1,2)
    print(a,b,c)
    
except: print('error')
