try:
    a,b,c=8,6,9
    def h(a,b,c):
        print(a,b,c,end=" ")
    
    h(3,c=0,b=3)
    print(a,b,c)
    
except: print('error')
