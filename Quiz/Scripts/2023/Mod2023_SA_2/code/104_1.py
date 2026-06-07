try:
    a,b,c=8,6,7
    def h(a,b=9,c):
        print(a,b,c,end=" ")
    
    h(4,3)
    print(a,b,c)
    
except: print('error')
