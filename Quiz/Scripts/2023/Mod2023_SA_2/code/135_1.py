try:
    a,b,c=9,6,8
    def h(a,b=7,c=9):
        print(a,b,c,end=" ")
    
    h(2,1,a=1)
    print(a,b,c)
    
except: print('error')
