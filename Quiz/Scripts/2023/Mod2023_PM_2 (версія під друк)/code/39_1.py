try:
    a,b,c=6,6,7
    def h(a,b=8,c):
        print(a,b,c,end=" ")
    
    h(a=2,5,a=3)
    print(a,b,c)
    
except: print('error')
