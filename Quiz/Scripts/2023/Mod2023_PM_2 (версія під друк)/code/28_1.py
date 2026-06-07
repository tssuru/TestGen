try:
    a,b,c=9,8,6
    def h(a,b=7,c=9):
        print(a,b,c,end=" ")
    
    h(2,c=1)
    print(a,b,c)
    
except: print('error')
