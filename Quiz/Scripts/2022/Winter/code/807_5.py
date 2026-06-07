try:
    
    a,b,c=9,8,7
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(1,0)
    print(a,b,c)
    
except: print('error')
