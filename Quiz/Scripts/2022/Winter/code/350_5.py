try:
    
    a,b,c=6,8,9
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(2,c=1,b=0)
    print(a,b,c)
    
except: print('error')
