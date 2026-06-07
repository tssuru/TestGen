try:
    
    a,b,c=7,9,8
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(5,1)
    print(a,b,c)
    
except: print('error')
