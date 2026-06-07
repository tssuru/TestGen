try:
    a,b,c=9,7,6
    def h(a,b=8,c):
        print(a,b,c,end=" ")
    
    h(2,c=0,b=3)
    print(a,b,c)
    
except: print('error')
