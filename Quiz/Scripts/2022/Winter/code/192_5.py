try:
    
    a,b,c=9,7,6
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(3,c=1,b=2)
    print(a,b,c)
    
except: print('error')
