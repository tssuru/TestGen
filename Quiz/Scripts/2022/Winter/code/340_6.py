try:
    a,b,c=0,3,6
    def h(a):
        a-=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=2,9,7
    print(h(a),a,b,c)
    
except: print('error')
