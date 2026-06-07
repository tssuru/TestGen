try:
    
    a,b,c=7,6,8
    def h(a,b=9,c=6):
        print(a,b,c,end="")
    
    h(3,c=4,b=0)
    print(a,b,c)
    
except: print('error')
