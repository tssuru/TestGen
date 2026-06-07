try:
    
    a,b,c=6,8,9
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(3,a=0)
    print(a,b,c)
    
except: print('error')
