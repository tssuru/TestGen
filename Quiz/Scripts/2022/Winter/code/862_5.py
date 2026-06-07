try:
    
    a,b,c=6,8,9
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(4,0)
    print(a,b,c)
    
except: print('error')
