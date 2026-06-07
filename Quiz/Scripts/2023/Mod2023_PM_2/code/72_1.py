try:
    a,b,c=7,9,8
    def h(a,b,c=9):
        print(a,b,c,end=" ")
    
    h(2,c=4,b=3)
    print(a,b,c)
    
except: print('error')
