try:
    
    a,b,c=9,7,8
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(2,5,c=1)
    print(a,b,c)
    
except: print('error')
