try:
    a,b,c=9,4,6
    def h(a):
        a=1
        b*=2
        c=3
        return a+b+c
    
    a,b,c=3,0,7
    print(h(a),a,b,c)
    
except: print('error')
