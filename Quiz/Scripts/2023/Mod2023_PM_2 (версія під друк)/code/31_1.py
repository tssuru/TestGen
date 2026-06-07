try:
    a,b,c=8,6,9
    def h(a,b=7,c=9):
        print(a,b,c,end=" ")
    
    h(4,c=3,b=0)
    print(a,b,c)
    
except: print('error')
