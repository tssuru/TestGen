try:
    
    a,b,c=6,7,8
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(2,3,2)
    print(a,b,c)
    
except: print('error')
