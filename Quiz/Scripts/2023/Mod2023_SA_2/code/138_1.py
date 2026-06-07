try:
    a,b,c=7,6,8
    def h(a,b,c=9):
        print(a,b,c,end=" ")
    
    h(1,c=0,b=2)
    print(a,b,c)
    
except: print('error')
