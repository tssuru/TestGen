try:
    
    a,b,c=9,7,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(4,1)
    print(a,b,c)
    
except: print('error')
