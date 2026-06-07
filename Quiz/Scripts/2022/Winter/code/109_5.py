try:
    
    a,b,c=9,8,6
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(1,3,c=0)
    print(a,b,c)
    
except: print('error')
