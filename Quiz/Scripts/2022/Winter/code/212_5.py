try:
    
    a,b,c=7,8,9
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(3,3,0)
    print(a,b,c)
    
except: print('error')
