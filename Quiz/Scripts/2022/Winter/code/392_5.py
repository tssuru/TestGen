try:
    
    a,b,c=9,7,6
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(2,4,0)
    print(a,b,c)
    
except: print('error')
