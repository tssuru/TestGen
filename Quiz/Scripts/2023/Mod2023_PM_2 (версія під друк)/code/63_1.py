try:
    a,b,c=8,6,7
    def h(a,b=6,c):
        print(a,b,c,end=" ")
    
    h(b=3,c=0,5)
    print(a,b,c)
    
except: print('error')
