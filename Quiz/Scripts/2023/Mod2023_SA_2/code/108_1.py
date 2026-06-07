try:
    a,b,c=6,9,7
    def h(a,b=8,c):
        print(a,b,c,end=" ")
    
    h(3,a=4)
    print(a,b,c)
    
except: print('error')
